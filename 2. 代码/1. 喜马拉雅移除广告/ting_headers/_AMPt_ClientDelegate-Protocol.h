//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, _AMPt_Client;
@protocol OS_dispatch_data;

@protocol _AMPt_ClientDelegate <NSObject>
- (void)client:(_AMPt_Client *)arg1 didFailToAppSwitch:(_Bool)arg2;
- (void)client:(_AMPt_Client *)arg1 didChangeActiveStateTo:(_Bool)arg2;
- (void)client:(_AMPt_Client *)arg1 didReceiveSynchronousMessage:(NSObject<OS_dispatch_data> *)arg2 contentType:(NSString *)arg3 sequenceNumber:(int)arg4;
- (void)client:(_AMPt_Client *)arg1 didReceiveAsynchronousMessage:(NSObject<OS_dispatch_data> *)arg2 contentType:(NSString *)arg3;
- (void)clientDidDisconnect:(_AMPt_Client *)arg1;
- (void)clientDidConnect:(_AMPt_Client *)arg1;
@end

