/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "WhatsApp-Structs.h"
#import "MKMapViewDelegate.h"
#import "WAMapViewDelegate.h"
#import "WALinkLabelDelegate.h"
#import "UIToolbarDelegate.h"
#import "WAViewController.h"

@class WATimer, NSString, UIBarButtonItem, UITableViewCell, WAFieldStatsEventLocationPicker, NSMutableArray, NSTimer, CLLocation, UITableView, UISearchBar, MKLocalSearch, WAMapTypeSegmentedControl, CAAnimation, WAHTTPFetcher, WAPulsingCircleView, WALinkLabel, CLLocationManager, WAMapView, NSMutableSet, UIToolbar, UIView, NSArray;
@protocol ShareLocationControllerDelegate;

__attribute__((visibility("hidden")))
@interface ShareLocationController : WAViewController <MKMapViewDelegate, WAMapViewDelegate, UISearchBarDelegate, UIToolbarDelegate, WALinkLabelDelegate, UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, CLLocationManagerDelegate> {
	WAFieldStatsEventLocationPicker* _fieldStats;
	double _elapsedTime;
	double _controllerLoadedTime;
	CLLocationManager* _locationManager;
	BOOL _goodLocationReceived;
	WATimer* _staleTimer;
	NSString* _placeSearchCriteria;
	WALinkLabel* _viewAttribution;
	UITableViewCell* _cellSendMyLocation;
	WAPulsingCircleView* _pulsingCircle;
	NSTimer* _pulseAnimationUpdateTimer;
	CAAnimation* _lastKnownPulseAnimation;
	NSMutableSet* _cachesCreatedThisSession;
	NSArray* _places;
	NSMutableArray* _searchHistory;
	CLLocation* _searchLocation;
	CLLocation* _lastUpdatedLocation;
	double _searchRadius;
	WAHTTPFetcher* _fetcher;
	MKLocalSearch* _appleMapsSearch;
	BOOL _requestInProgress;
	unsigned _defaultSource;
	BOOL _isFallBack;
	BOOL _displayShadow;
	int _lastKnownOrientation;
	BOOL _moreResultsAvailable;
	NSString* _nextResultsPageURLString;
	int _loadingMoreRowIndex;
	UITableViewCell* _cellLoadingMore;
	int _expandCollapseRowIndex;
	int _searchingRowIndex;
	BOOL _zoomToPlacesWhenMapExpands;
	BOOL _locationUnavailableAlertShown;
	BOOL _locationServicesDisabledAlertShown;
	BOOL _fullHeightLayout;
	BOOL _showCollapseButton;
	BOOL _placeListExpanded;
	id<ShareLocationControllerDelegate> _delegate;
	UISearchBar* _searchBar;
	UIView* _viewMapContainer;
	WAMapView* _mapView;
	UIView* _horizontalMapDivider;
	UIView* _verticalMapDivider;
	UITableView* _tableViewPlaces;
	UIToolbar* _toolbarMapType;
	WAMapTypeSegmentedControl* _scMapType;
	UIBarButtonItem* _barButtonCancel;
	UIBarButtonItem* _barButtonRefresh;
	NSString* _accuracyStr;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL placeListExpanded;
@property(assign, nonatomic) BOOL showCollapseButton;
@property(assign, nonatomic) BOOL fullHeightLayout;
@property(copy, nonatomic) NSString* accuracyStr;
@property(retain, nonatomic) UIBarButtonItem* barButtonRefresh;
@property(retain, nonatomic) UIBarButtonItem* barButtonCancel;
@property(retain, nonatomic) WAMapTypeSegmentedControl* scMapType;
@property(retain, nonatomic) UIToolbar* toolbarMapType;
@property(retain, nonatomic) UITableView* tableViewPlaces;
@property(retain, nonatomic) UIView* verticalMapDivider;
@property(retain, nonatomic) UIView* horizontalMapDivider;
@property(retain, nonatomic) WAMapView* mapView;
@property(retain, nonatomic) UIView* viewMapContainer;
@property(retain, nonatomic) UISearchBar* searchBar;
@property(assign, nonatomic) __weak id<ShareLocationControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)handleOpenURL:(id)url fromLinkLabel:(id)linkLabel;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerDidBeginSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchDisplayController:(id)controller didHideSearchResultsTableView:(id)view;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(void)mapView:(id)view didSelectLocation:(id)location;
-(void)mapView:(id)view didSelectPlacemark:(id)placemark location:(id)location;
-(void)mapView:(id)view annotationView:(id)view2 calloutAccessoryControlTapped:(id)tapped;
-(void)mapView:(id)view didFailToLocateUserWithError:(id)error;
-(void)mapView:(id)view didUpdateUserLocation:(id)location;
-(int)positionForBar:(id)bar;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)wa_applicationWillEnterForeground;
-(void)wa_applicationDidEnterBackground;
-(void)wa_fontSizeDidChange;
-(void)wa_tintColorDidChange;
-(void)willTransitionToTraitCollection:(id)traitCollection withTransitionCoordinator:(id)transitionCoordinator;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)cancelController;
-(void)finishControllerWithWAPlace:(id)waplace;
-(void)showDetailsForWAPlace:(id)waplace;
-(void)expandOrCollapsePlaceList;
-(void)refreshAction:(id)action;
-(void)cancelAction:(id)action;
-(void)mapTypeChangedAction:(id)action;
-(id)fullPathToSearchHistoryFile;
-(void)addSearchHistoryItem:(id)item;
-(void)setAttribution:(id)attribution;
-(void)startLocationUpdatesIfNecessary;
-(void)checkStateOfLocationServices;
-(void)processLocationError:(id)error;
-(void)processUpdatedLocation:(id)location;
-(void)searchUsingBestKnownLocation;
-(void)searchWithCriteria:(id)criteria;
-(void)fetchNextPage;
-(void)searchForPlaces;
-(BOOL)searchCache:(id)cache;
-(void)searchWithApple;
-(void)processFacebookPlaceSearchData:(id)data error:(id)error;
-(id)stripNewlines:(id)newlines;
-(void)appendString:(id)string ToAddress:(id)address withSeparator:(BOOL)separator;
-(void)searchWithFacebook;
-(void)processFoursquarePlaceSearchData:(id)data error:(id)error;
-(void)searchWithFoursquare;
-(void)processGooglePlaceSearchData:(id)data error:(id)error;
-(void)searchWithGoogle;
-(void)useFallbackForSource:(unsigned)source submitFailure:(BOOL)failure;
-(void)sendCurrentLocation;
-(void)stopPlaceSearch;
-(void)useResults:(id)results add:(BOOL)add cache:(BOOL)cache moreAvailable:(BOOL)available;
-(int)minSearchDistanceNoQuery;
-(void)updatePulseAnimation:(id)animation;
-(void)updateLayoutForCurrentOrientation;
-(void)dealloc;
-(id)initWithShareDelegate:(id)shareDelegate;
@end

