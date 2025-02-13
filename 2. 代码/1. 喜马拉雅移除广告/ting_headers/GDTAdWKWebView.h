//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "GDTWebViewProtocol-Protocol.h"

@class GDTBridge, NSString, NSURL, NSURLRequest;
@protocol GDTAdLifeEventListener;

@interface GDTAdWKWebView : WKWebView <GDTWebViewProtocol>
{
    _Bool _scalesPageToFit;
    NSString *_threadId;
    GDTBridge *_bridge;
    id <GDTAdLifeEventListener> _adLifeEventListener;
    NSString *_htmlString;
    NSURLRequest *_reloadRequest;
}

@property(retain, nonatomic) NSURLRequest *reloadRequest; // @synthesize reloadRequest=_reloadRequest;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(retain, nonatomic) id <GDTAdLifeEventListener> adLifeEventListener; // @synthesize adLifeEventListener=_adLifeEventListener;
@property(retain, nonatomic) GDTBridge *bridge; // @synthesize bridge=_bridge;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (void)gdt_loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)gdt_evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)gdt_setDelegate:(id)arg1;
- (void)gdt_loadRequest:(id)arg1;
- (void)gdt_stopLoading;
- (void)gdt_reload;
- (void)gdt_goForward;
- (void)gdt_goBack;
- (void)onAdEvent:(id)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

