//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

@class NSString, NSTimer, UIView, WiimuSmartlink, XMCircularProgressView;

@interface XMBroadcastWiFiViewController : XMSubLevelViewController
{
    double _timesCnt;
    XMCircularProgressView *_progressView;
    NSTimer *_progressTimer;
    NSString *_wifiPassw;
    UIView *_connectingView;
    UIView *_connFailView;
    WiimuSmartlink *_smartLink;
}

@property(retain, nonatomic) WiimuSmartlink *smartLink; // @synthesize smartLink=_smartLink;
@property(retain, nonatomic) UIView *connFailView; // @synthesize connFailView=_connFailView;
@property(retain, nonatomic) UIView *connectingView; // @synthesize connectingView=_connectingView;
@property(copy, nonatomic) NSString *wifiPassw; // @synthesize wifiPassw=_wifiPassw;
- (void).cxx_destruct;
- (void)onCancelBtnClicked;
- (void)connectTimeout;
- (void)progressUp;
- (void)startConnect;
- (void)onRetryConnectClicked;
- (void)stopAndCancel;
- (id)initWithPassword:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

@end

