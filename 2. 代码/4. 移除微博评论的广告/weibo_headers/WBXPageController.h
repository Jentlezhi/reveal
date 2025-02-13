//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBXNavigationBarDelegate-Protocol.h"
#import "WBXPageControlProtocol-Protocol.h"

@class NSMutableArray, NSString, WBXNavigationBar, WBXPage, WBXRefreshAutoNormalFooter, WBXRefreshNormalHeader, WBXWebView;
@protocol WBXPageViewDelegate, WBXSplashProtocol, WBXViewControllerProtocol;

@interface WBXPageController : NSObject <WBXPageControlProtocol, WBXNavigationBarDelegate>
{
    NSMutableArray *webViewConstraint;
    _Bool _showing;
    _Bool _isCurrent;
    WBXPage<WBXPageViewDelegate> *_page;
    WBXRefreshAutoNormalFooter *_refreshFooter;
    WBXRefreshNormalHeader *_refreshHeader;
    WBXNavigationBar *_navigationBar;
    WBXWebView *_webView;
    id <WBXViewControllerProtocol> _vc;
    CDUnknownBlockType _pageCustomEventCallback;
    CDUnknownBlockType _pageRenderFinishedCallback;
    id <WBXSplashProtocol> _splashManager;
}

@property(retain, nonatomic) id <WBXSplashProtocol> splashManager; // @synthesize splashManager=_splashManager;
@property(copy, nonatomic) CDUnknownBlockType pageRenderFinishedCallback; // @synthesize pageRenderFinishedCallback=_pageRenderFinishedCallback;
@property(copy, nonatomic) CDUnknownBlockType pageCustomEventCallback; // @synthesize pageCustomEventCallback=_pageCustomEventCallback;
@property(nonatomic) __weak id <WBXViewControllerProtocol> vc; // @synthesize vc=_vc;
@property(nonatomic) _Bool isCurrent; // @synthesize isCurrent=_isCurrent;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) WBXWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WBXNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) WBXRefreshNormalHeader *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(readonly, nonatomic) WBXRefreshAutoNormalFooter *refreshFooter; // @synthesize refreshFooter=_refreshFooter;
@property(nonatomic) __weak WBXPage<WBXPageViewDelegate> *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)wbx_setTitle:(id)arg1;
- (void)wbx_setTitleColor:(id)arg1;
- (void)wbx_setBackgroundColor:(id)arg1;
- (void)wbx_setNavigationBarBackgroundColor:(id)arg1;
- (void)keyBoardHidden;
- (void)keyBoardShow;
- (void)beginLoadingMoreWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)beginRefreshWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)_checkPageShowingStatusStart:(_Bool)arg1;
- (void)send1464NotificationStart:(_Bool)arg1;
- (void)sendDealloc;
- (void)dealloc;
- (void)destroy;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewSizeChange;
- (void)vcViewSizeToFit;
- (void)wbx_nav_pop;
- (void)wbx_nav_close;
- (id)createViewController;
- (void)setCustomEventCallBack:(CDUnknownBlockType)arg1;
- (void)setRenderFinishedCallBack:(CDUnknownBlockType)arg1;
- (void)viewDidFinishFirstLoading;
- (void)onCustomEvent:(id)arg1;
- (void)becomeActive;
- (void)enterBackground;
- (id)initWithPage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

