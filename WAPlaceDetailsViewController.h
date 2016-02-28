/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class UIWebView, WAPlace;

@interface WAPlaceDetailsViewController : WAViewController <UIWebViewDelegate>
{
    BOOL _pageLoaded;
    WAPlace *_waPlace;
    id <ShareLocationControllerDelegate> _delegate;
    UIWebView *_webView;
}

- (void)setWebView:(id)fp8;
- (id)webView;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setWaPlace:(id)fp8;
- (id)waPlace;
- (void).cxx_destruct;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)webViewDidStartLoad:(id)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)loadPlacePageWithURLString:(id)fp8;
- (void)sendPlaceAction:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)loadView;
- (void)dealloc;
- (id)initWithWAPlace:(id)fp8 delegate:(id)fp12;

@end

