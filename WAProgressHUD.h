/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString, NSTimer, UIColor, UIFont, UILabel, UIView;

@interface WAProgressHUD : _ABAddressBookCopyArrayOfAllGroups
{
    BOOL useAnimation;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    UILabel *label;
    UILabel *detailsLabel;
    BOOL isFinished;
    struct CGAffineTransform rotationTransform;
    BOOL square;
    BOOL dimBackground;
    BOOL taskInProgress;
    BOOL removeFromSuperViewOnHide;
    unsigned int animationType;
    id <WAProgressHUDDelegate> delegate;
    float opacity;
    UIColor *color;
    UIFont *labelFont;
    UIFont *detailsLabelFont;
    UIView *indicator;
    float xOffset;
    float yOffset;
    float margin;
    float graceTime;
    float minShowTime;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    UIView *customView;
    unsigned int mode;
    NSString *labelText;
    NSString *detailsLabelText;
    float progress;
    id completionBlock;
    struct CGSize minSize;
    struct CGSize size;
    double _showStartedTimestamp;
}

+ (id)allHUDsForView:(id)fp8;
+ (id)HUDForView:(id)fp8;
+ (unsigned int)hideAllHUDsForView:(id)fp8 animated:(BOOL)fp12;
+ (BOOL)hideHUDForView:(id)fp8 animated:(BOOL)fp12;
+ (id)showHUDAddedTo:(id)fp8 animated:(BOOL)fp12;
- (void)setShowStartedTimestamp:(double)fp8;
- (double)showStartedTimestamp;
- (void)setCompletionBlock:(id)fp(null);
- (id)completionBlock;
- (void)setSize:(struct CGSize)fp8;
- (struct CGSize)size;
- (void)setProgress:(float)fp8;
- (float)progress;
- (void)setDetailsLabelText:(id)fp8;
- (id)detailsLabelText;
- (void)setLabelText:(id)fp8;
- (id)labelText;
- (void)setMode:(unsigned int)fp8;
- (unsigned int)mode;
- (void)setCustomView:(id)fp8;
- (id)customView;
- (void)setRemoveFromSuperViewOnHide:(BOOL)fp8;
- (BOOL)removeFromSuperViewOnHide;
- (void)setTaskInProgress:(BOOL)fp8;
- (BOOL)taskInProgress;
- (void)setMinShowTimer:(id)fp8;
- (id)minShowTimer;
- (void)setGraceTimer:(id)fp8;
- (id)graceTimer;
- (void)setMinShowTime:(float)fp8;
- (float)minShowTime;
- (void)setGraceTime:(float)fp8;
- (float)graceTime;
- (void)setDimBackground:(BOOL)fp8;
- (BOOL)dimBackground;
- (void)setMargin:(float)fp8;
- (float)margin;
- (void)setSquare:(BOOL)fp8;
- (BOOL)isSquare;
- (void)setMinSize:(struct CGSize)fp8;
- (struct CGSize)minSize;
- (void)setYOffset:(float)fp8;
- (float)yOffset;
- (void)setXOffset:(float)fp8;
- (float)xOffset;
- (void)setIndicator:(id)fp8;
- (id)indicator;
- (void)setDetailsLabelFont:(id)fp8;
- (id)detailsLabelFont;
- (void)setLabelFont:(id)fp8;
- (id)labelFont;
- (void)setColor:(id)fp8;
- (id)color;
- (void)setOpacity:(float)fp8;
- (float)opacity;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setAnimationType:(unsigned int)fp8;
- (unsigned int)animationType;
- (void).cxx_destruct;
- (void)setTransformForCurrentOrientation:(BOOL)fp8;
- (void)deviceOrientationDidChange:(id)fp8;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (void)updateUIForKeypath:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)drawRect:(struct CGRect)fp8;
- (void)layoutSubviews;
- (void)updateIndicators;
- (void)setupLabels;
- (void)cleanUp;
- (void)launchExecution;
- (void)showAnimated:(BOOL)fp8 whileExecutingBlock:(id)fp(null) onQueue:(void)fp12 completionBlock:(id)fp16;
- (void)showAnimated:(BOOL)fp8 whileExecutingBlock:(id)fp(null) onQueue:(void)fp12;
- (void)showAnimated:(BOOL)fp8 whileExecutingBlock:(id)fp(null) completionBlock:(void)fp12;
- (void)showAnimated:(BOOL)fp8 whileExecutingBlock:(id)fp(null);
- (void)showWhileExecuting:(SEL)fp8 onTarget:(id)fp12 withObject:(id)fp16 animated:(BOOL)fp20;
- (void)done;
- (void)animationFinished:(id)fp8 finished:(BOOL)fp12 context:(void *)fp16;
- (void)hideUsingAnimation:(BOOL)fp8;
- (void)showUsingAnimation:(BOOL)fp8;
- (void)handleMinShowTimer:(id)fp8;
- (void)handleGraceTimer:(id)fp8;
- (void)hideDelayed:(id)fp8;
- (void)hide:(BOOL)fp8 afterDelay:(double)fp12;
- (void)hide:(BOOL)fp8;
- (void)show:(BOOL)fp8;
- (void)dealloc;
- (id)initWithWindow:(id)fp8;
- (id)initWithView:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

