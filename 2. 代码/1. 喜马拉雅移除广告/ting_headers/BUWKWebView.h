//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "BUWebView-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class BUJSInjector, BUStaticPlugin, NSPointerArray, NSString, NSURL, UIScrollView, UIViewController;
@protocol BUJSBAuthorization;

@interface BUWKWebView : WKWebView <WKNavigationDelegate, BUWebView>
{
    _Bool _hasInjectedScript;
    UIViewController *_ttr_sourceController;
    BUStaticPlugin *_tt_staticPlugin;
    NSPointerArray *_slaveDelates;
    UIScrollView *_ttr_scrollView;
    BUJSInjector *_ttr_injector;
}

+ (id)shareProcessPool;
@property(nonatomic) _Bool hasInjectedScript; // @synthesize hasInjectedScript=_hasInjectedScript;
@property(retain, nonatomic) BUJSInjector *ttr_injector; // @synthesize ttr_injector=_ttr_injector;
@property(retain, nonatomic) UIScrollView *ttr_scrollView; // @synthesize ttr_scrollView=_ttr_scrollView;
@property(retain, nonatomic) NSPointerArray *slaveDelates; // @synthesize slaveDelates=_slaveDelates;
@property(retain, nonatomic) BUStaticPlugin *ttr_staticPlugin; // @synthesize ttr_staticPlugin=_tt_staticPlugin;
@property(nonatomic) __weak UIViewController *ttr_sourceController; // @synthesize ttr_sourceController=_ttr_sourceController;
- (void).cxx_destruct;
- (_Bool)checkWebContentBlank:(id)arg1 withBlankColor:(id)arg2;
- (_Bool)checkIfAddToShow;
- (void)bu_oldDetectBlankWebViewCompleteBlock:(CDUnknownBlockType)arg1;
- (void)bu_detectBlankWebViewCompleteBlock:(CDUnknownBlockType)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)ttr_fireEvent:(id)arg1 data:(id)arg2;
- (void)ttr_evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ttr_removeAllDelegate;
- (void)ttr_removeDelegate:(id)arg1;
- (void)ttr_addDelegate:(id)arg1;
- (void)ttr_goForward;
- (void)ttr_goBack;
- (_Bool)ttr_canGoForward;
- (_Bool)ttr_canGoBack;
- (void)ttr_reload;
- (void)ttr_stopLoading;
- (void)ttr_loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2;
- (void)ttr_loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)ttr_loadRequest:(id)arg1;
@property(readonly, nonatomic) NSURL *ttr_url;
- (void)injectScriptIfNeed;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <BUJSBAuthorization> ttr_authorization;

@end

