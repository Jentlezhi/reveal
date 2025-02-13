//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIBarButtonItem, UIWebView;

@interface HelpController : BaseController <UIWebViewDelegate>
{
    UIWebView *_webView;
    UIActivityIndicatorView *_indicator;
    UIBarButtonItem *_btn_back;
}

@property(retain, nonatomic) UIBarButtonItem *btn_back; // @synthesize btn_back=_btn_back;
@property(nonatomic) __weak UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)GoBackClicked:(id)arg1;
- (void)init_web;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

