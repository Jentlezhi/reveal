//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBNLPKCompetitorInfoManager : NSObject
{
    _Bool _pushFromUserProfileView;
    NSString *_anchorContainerId;
    NSString *_competitorScid;
    NSString *_pkContainerId;
    NSString *_pkContainerReserveId;
}

+ (id)sharedManager;
@property(nonatomic) _Bool pushFromUserProfileView; // @synthesize pushFromUserProfileView=_pushFromUserProfileView;
@property(copy, nonatomic) NSString *pkContainerReserveId; // @synthesize pkContainerReserveId=_pkContainerReserveId;
@property(copy, nonatomic) NSString *pkContainerId; // @synthesize pkContainerId=_pkContainerId;
@property(copy, nonatomic) NSString *competitorScid; // @synthesize competitorScid=_competitorScid;
@property(copy, nonatomic) NSString *anchorContainerId; // @synthesize anchorContainerId=_anchorContainerId;
- (void).cxx_destruct;
- (void)resetManager;
- (void)destoryManager;
- (id)init;

@end

