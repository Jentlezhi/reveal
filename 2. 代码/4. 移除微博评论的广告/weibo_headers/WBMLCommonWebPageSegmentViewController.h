//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLCommonBaseSegmentViewController.h"

@class UIView, WBMLBaseWebViewController;

@interface WBMLCommonWebPageSegmentViewController : WBMLCommonBaseSegmentViewController
{
    UIView *_weakWebView;
    WBMLBaseWebViewController *_webViewController;
}

@property(nonatomic) __weak WBMLBaseWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) __weak UIView *weakWebView; // @synthesize weakWebView=_weakWebView;
- (void).cxx_destruct;
- (void)addChildWebViewControllerInParentViewController:(id)arg1 urlString:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initViewControllerWithSegmentChannel:(id)arg1 baseViewController:(id)arg2 userInfo:(id)arg3;
- (void)dealloc;

@end

