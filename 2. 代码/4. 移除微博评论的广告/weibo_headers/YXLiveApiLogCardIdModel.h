//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YXLiveApiLogCardIdModel : NSObject
{
    NSString *_businessId;
    NSString *_materialId;
    NSString *_moduleId;
}

+ (id)modelWithBusinessId:(id)arg1 materialId:(id)arg2 moduleId:(id)arg3;
@property(copy, nonatomic) NSString *moduleId; // @synthesize moduleId=_moduleId;
@property(copy, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
@property(readonly, copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *cardId;
- (id)initWithBusinessId:(id)arg1 materialId:(id)arg2 moduleId:(id)arg3;

@end

