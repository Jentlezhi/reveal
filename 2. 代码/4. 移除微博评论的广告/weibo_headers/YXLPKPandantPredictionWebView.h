//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WKNavigationDelegate-Protocol.h"
#import "YXWebViewDelegate-Protocol.h"

@class NSString, UIButton, YXLiveRechargeView, YXWebView;
@protocol YXLPKPandantPredictionWebViewDelegate;

@interface YXLPKPandantPredictionWebView : UIView <WKNavigationDelegate, YXWebViewDelegate>
{
    id <YXLPKPandantPredictionWebViewDelegate> _delegate;
    CDUnknownBlockType _closeButtonActionBlock;
    CDUnknownBlockType _jumpBlock;
    CDUnknownBlockType _trueLoveBlock;
    YXWebView *_webView;
    UIButton *_closeButton;
    YXLiveRechargeView *_rechargeView;
}

@property(nonatomic) __weak YXLiveRechargeView *rechargeView; // @synthesize rechargeView=_rechargeView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) YXWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType trueLoveBlock; // @synthesize trueLoveBlock=_trueLoveBlock;
@property(copy, nonatomic) CDUnknownBlockType jumpBlock; // @synthesize jumpBlock=_jumpBlock;
@property(copy, nonatomic) CDUnknownBlockType closeButtonActionBlock; // @synthesize closeButtonActionBlock=_closeButtonActionBlock;
@property(nonatomic) __weak id <YXLPKPandantPredictionWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)yxt_currentViewController;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)addJSMethods;
- (void)jumpNewWebView:(id)arg1;
- (void)loadUrl:(id)arg1;
- (void)loadModel:(id)arg1;
- (void)closeAction;
- (void)initUI;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

