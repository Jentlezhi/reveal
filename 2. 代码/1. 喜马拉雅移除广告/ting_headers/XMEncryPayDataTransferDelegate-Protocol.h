//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSURL;

@protocol XMEncryPayDataTransferDelegate <NSObject>

@optional
- (void)didFailedEncryDataTransfer:(id)arg1 withTrackId:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)didSuccedEncryDataTransfer:(id)arg1 withTrackId:(unsigned long long)arg2 withRequestURL:(NSURL *)arg3 withExtData:(NSDictionary *)arg4;
@end

