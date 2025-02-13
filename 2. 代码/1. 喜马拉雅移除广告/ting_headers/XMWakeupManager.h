//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURLConnection, UIAlertView, XMHTTPConnection, XMSoundItem;

@interface XMWakeupManager : NSObject
{
    NSURLConnection *_connection;
    int contentLength;
    XMSoundItem *localSound;
    XMHTTPConnection *downloadRequest;
    NSMutableArray *downloadRings;
    UIAlertView *wakeupAlert;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(nonatomic) __weak UIAlertView *wakeupAlert; // @synthesize wakeupAlert;
@property(retain, nonatomic) NSMutableArray *downloadRings; // @synthesize downloadRings;
@property(nonatomic) int contentLength; // @synthesize contentLength;
@property(retain, nonatomic) XMHTTPConnection *downloadRequest; // @synthesize downloadRequest;
@property(retain, nonatomic) XMSoundItem *localSound; // @synthesize localSound;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)requestHeadMedataFromNet;
- (void)cancelHeadRequest;
- (void)httpConnectionFinished:(id)arg1;
- (void)httpConnectionFailed:(id)arg1;
- (void)downloadSound:(id)arg1;
- (void)scheduleNapAlarm;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)showWakupAlert;
- (void)trackEvent;
- (void)saveWakeupSettings;
- (void)showFaileMessage;
- (_Bool)needDownload;
- (void)reloadData;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

