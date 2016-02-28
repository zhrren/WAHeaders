/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAViewController.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"

@class CLGeocoder, CLLocation, CLLocationManager, MKMapView, NSMutableArray, UIBarButtonItem, UIImageView, UILabel, UIToolbar, WAConversationHeaderView, WAMapTypeSegmentedControl;

@interface UserLocationViewController : WAViewController <MKMapViewDelegate, CLLocationManagerDelegate>
{
    WAMapTypeSegmentedControl *_segmentedControl;
    UIBarButtonItem *_barButtonSearch;
    UIBarButtonItem *_barButtonAction;
    UIBarButtonItem *_segmentedControlBarItem;
    UIImageView *_noMediaImage;
    UILabel *_noMediaLabelTitle;
    UILabel *_noMediaLabelText;
    WAConversationHeaderView *_headerView;
    int _lastKnownInterfaceOrientation;
    CLGeocoder *_geocoder;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    NSMutableArray *_annotations;
    unsigned int _regionType;
    int _locationIndex;
    double _zoomLevel;
    BOOL _showMyLocation;
    BOOL _singleLocation;
    BOOL _showMapTypeSelector;
    BOOL _locationAuthorized;
    MKMapView *_mapViewMain;
    UIToolbar *_toolbar;
    id <WALocationDataSource> _dataSource;
}

- (void)setDataSource:(id)fp8;
- (id)dataSource;
- (void)setToolbar:(id)fp8;
- (id)toolbar;
- (void)setMapViewMain:(id)fp8;
- (id)mapViewMain;
- (void)setLocationAuthorized:(BOOL)fp8;
- (BOOL)locationAuthorized;
- (void)setShowMapTypeSelector:(BOOL)fp8;
- (BOOL)showMapTypeSelector;
- (void)setSingleLocation:(BOOL)fp8;
- (BOOL)singleLocation;
- (void)setShowMyLocation:(BOOL)fp8;
- (BOOL)showMyLocation;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)locationManager:(id)fp8 didFailWithError:(id)fp12;
- (void)locationManager:(id)fp8 didUpdateToLocation:(id)fp12 fromLocation:(id)fp16;
- (void)locationManager:(id)fp8 didChangeAuthorizationStatus:(int)fp12;
- (void)processLocationError:(id)fp8;
- (void)updateLocationDataWithCoordinate:(CDAnonymousStruct15)fp8 withPlacemark:(id)fp24;
- (void)displayExpectedTravelTime:(double)fp8 forAnnotation:(id)fp16;
- (void)calculateExpectedTravelTimeForAnnotation:(id)fp8;
- (void)mapView:(id)fp8 regionDidChangeAnimated:(BOOL)fp12;
- (void)mapView:(id)fp8 didAddAnnotationViews:(id)fp12;
- (id)mapView:(id)fp8 viewForAnnotation:(id)fp12;
- (void)mapView:(id)fp8 annotationView:(id)fp12 calloutAccessoryControlTapped:(id)fp16;
- (void)directionsToHere;
- (void)searchAction:(id)fp8;
- (void)mapAction:(id)fp8;
- (void)mapTypeChanged:(id)fp8;
- (void)showPlaceInfoAction:(id)fp8;
- (void)updateAnnotationsWithCurrentLocation;
- (void)reloadAnnotations;
- (id)findFirstGroupingWithAnnotations:(id)fp8;
- (void)layoutNoLocationsView;
- (void)setupToolbar;
- (void)updateMapRegionAnimated:(BOOL)fp8;
- (void)updateHeaderViewToCurrentInterfaceOrientation;
- (void)updateNavBar;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithLocationDataSource:(id)fp8;

@end
