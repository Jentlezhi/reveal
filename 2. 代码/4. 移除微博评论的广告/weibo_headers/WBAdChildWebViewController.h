//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBasicWebViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UILabel, UIScrollView, UIView;
@protocol WBAdChildWebViewControllerDelegate;

@interface WBAdChildWebViewController : WBBasicWebViewController <UIScrollViewDelegate>
{
    _Bool _isvideoslide;
    id <WBAdChildWebViewControllerDelegate> _delegate;
    UILabel *_loadingTipsLabel;
    UIView *_errorView;
    UIScrollView *_webviewScrollView;
}

@property(nonatomic) __weak UIScrollView *webviewScrollView; // @synthesize webviewScrollView=_webviewScrollView;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool isvideoslide; // @synthesize isvideoslide=_isvideoslide;
@property(retain, nonatomic) UILabel *loadingTipsLabel; // @synthesize loadingTipsLabel=_loadingTipsLabel;
@property(nonatomic) __weak id <WBAdChildWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)applicationWillChangeStatusBarFrameNotification:(id)arg1;
- (_Bool)allowsBackForwardNavigationGestures;
- (_Bool)displaysLoadingProgressBar;
- (_Bool)_shouldShowMoreMenu;
- (void)wb_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)wb_webViewDidFinishLoad:(id)arg1;
- (void)wb_webViewDidStartLoad:(id)arg1;
- (void)_setupLoadingTips;
- (void)layoutViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUrlString:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

