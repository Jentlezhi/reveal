//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTHandlerContextProtocol-Protocol.h"
#import "GDTHandlerRewardVideoProtocol-Protocol.h"
#import "GDTRewardedVideoAdDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class GDTClickManager, NSDictionary, NSMutableDictionary, NSString, NSURL, UIViewController;
@protocol GDTHybridAdViewDelegate, GDTWebViewProtocol;

@interface GDTHybridAdView : UIView <WKNavigationDelegate, GDTHandlerContextProtocol, GDTHandlerRewardVideoProtocol, GDTRewardedVideoAdDelegate>
{
    id <GDTHybridAdViewDelegate> _delegate;
    UIViewController *_rootViewController;
    long long _adOptions;
}

@property(nonatomic) long long adOptions; // @synthesize adOptions=_adOptions;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <GDTHybridAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (void)reload;
- (void)loadRequest:(id)arg1;
- (void)initWebView;
- (void)layoutSubviews;
- (id)initWithAdOptions:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *handlerDict;
@property(retain, nonatomic) UIView<GDTWebViewProtocol> *webView;
- (_Bool)gdtWebView:(id)arg1 shouldLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)initWebViewWithHandlerArray:(id)arg1;
@property(nonatomic) long long maxRewardVideoAdCount;
@property(retain, nonatomic) NSMutableDictionary *instanceIdAndRewardVideoMapDict;
- (void)gdt_rewardVideoAdDidPlayFinish:(id)arg1;
- (void)gdt_rewardVideoAdDidRewardEffective:(id)arg1;
- (void)gdt_rewardVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)gdt_rewardVideoAdDidClicked:(id)arg1;
- (void)gdt_rewardVideoAdDidClose:(id)arg1;
- (void)gdt_rewardVideoAdDidExposed:(id)arg1;
- (void)gdt_rewardVideoAdWillVisible:(id)arg1;
- (void)gdt_rewardVideoAdVideoDidLoad:(id)arg1;
- (void)gdt_rewardVideoAdDidLoad:(id)arg1;
- (void)sendJsResponseWithRewardVideo:(id)arg1 action:(id)arg2;
- (void)sendJsResponseWithRewardVideoAd:(id)arg1 action:(id)arg2 error:(id)arg3;
- (void)sendJsReponseWithCallbackId:(id)arg1 instanceId:(id)arg2 expiredTimestamp:(long long)arg3 action:(id)arg4 error:(id)arg5;
- (void)showRewardVideoWithInstanceId:(id)arg1;
- (void)loadRewardVideoWithInstanceId:(id)arg1;
- (void)registerRewardVideoWithPlacementId:(id)arg1 url:(id)arg2 instanceId:(id)arg3 callbackId:(id)arg4;

// Remaining properties
@property(retain, nonatomic) GDTClickManager *clickManager;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *endCardDict;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

