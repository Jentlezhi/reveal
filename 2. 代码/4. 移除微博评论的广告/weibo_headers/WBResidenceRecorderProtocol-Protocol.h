//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WBResidenceRecord, WBUniversialViewController;
@protocol WBResidenceRecorderEntityProtocol;

@protocol WBResidenceRecorderProtocol <NSObject>

@optional
- (void)residenceEntity:(id <WBResidenceRecorderEntityProtocol>)arg1 recordDidappear:(WBResidenceRecord *)arg2;
- (void)residenceEntity:(id <WBResidenceRecorderEntityProtocol>)arg1 recordAppear:(WBResidenceRecord *)arg2;
- (NSString *)residenceEntityID:(id <WBResidenceRecorderEntityProtocol>)arg1;
- (void)residenceLogTimeRecord:(NSDictionary *)arg1;
- (void)residenceViewcontroller:(WBUniversialViewController *)arg1 recordDidappear:(WBResidenceRecord *)arg2;
- (void)residenceViewcontroller:(WBUniversialViewController *)arg1 recordAppear:(WBResidenceRecord *)arg2;
- (NSString *)residenceViewControllerID:(WBUniversialViewController *)arg1;
@end

