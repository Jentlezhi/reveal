//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "XMHWebViewProtocol-Protocol.h"

@class NSString, UIView, XMHWebViewProvider;
@protocol XMGiftPenguinGameViewDelegate;

@interface XMGiftPenguinGameView : XMBaseVC <XMHWebViewProtocol>
{
    double _startStamp;
    _Bool _loadFailed;
    id <XMGiftPenguinGameViewDelegate> _delegate;
    NSString *_gameUrl;
    XMHWebViewProvider *_webProvider;
    UIView *_loadFailedView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loadFailed; // @synthesize loadFailed=_loadFailed;
@property(retain, nonatomic) UIView *loadFailedView; // @synthesize loadFailedView=_loadFailedView;
@property(retain, nonatomic) XMHWebViewProvider *webProvider; // @synthesize webProvider=_webProvider;
@property(copy, nonatomic) NSString *gameUrl; // @synthesize gameUrl=_gameUrl;
@property(nonatomic) __weak id <XMGiftPenguinGameViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onReloadClicked:(id)arg1;
- (void)dismiss;
- (void)reloadGameView;
- (void)xmh_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)xmh_webViewDidFinishLoad:(id)arg1;
- (void)xmh_webViewDidStartLoad:(id)arg1;
- (_Bool)xmh_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)jscall_sendGifts:(id)arg1;
- (void)jscall_quitGame;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

