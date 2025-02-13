//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError;

@protocol XMFlvDownloaderDelegate <NSObject>

@optional
- (void)didParserEndWithResponseHeader:(NSDictionary *)arg1;
- (void)didParserDataAvailable;
- (void)didParserDataUnSupport:(NSData *)arg1;
- (void)didParserDataError:(NSError *)arg1 needEnd:(_Bool)arg2;
- (void)didReceiveData:(NSData *)arg1 withError:(NSError *)arg2;
@end

