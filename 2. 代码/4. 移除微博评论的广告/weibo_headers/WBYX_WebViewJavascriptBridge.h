//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WebViewJavascriptBridgeBaseDelegate-Protocol.h"

@class NSString, UIWebView, WebViewJavascriptBridgeBase;

@interface WBYX_WebViewJavascriptBridge : NSObject <UIWebViewDelegate, WebViewJavascriptBridgeBaseDelegate>
{
    UIWebView *_webView;
    id _webViewDelegate;
    long long _uniqueId;
    WebViewJavascriptBridgeBase *_base;
}

+ (id)bridge:(id)arg1;
+ (id)bridgeForWebView:(id)arg1;
+ (void)setLogMaxLength:(int)arg1;
+ (void)enableLogging;
- (void).cxx_destruct;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)_platformSpecificDealloc;
- (void)_platformSpecificSetup:(id)arg1;
- (id)_evaluateJavascript:(id)arg1;
- (void)dealloc;
- (void)disableJavscriptAlertBoxSafetyTimeout;
- (void)removeHandler:(id)arg1;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;
- (void)setWebViewDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

