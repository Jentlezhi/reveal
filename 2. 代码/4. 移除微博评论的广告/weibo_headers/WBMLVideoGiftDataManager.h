//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBMLVideoGiftModel;

@interface WBMLVideoGiftDataManager : NSObject
{
    WBMLVideoGiftModel *_barrageModel;
    WBMLVideoGiftModel *_outerGiftModel;
}

+ (id)filterGiftModelWithGiftId:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) WBMLVideoGiftModel *outerGiftModel; // @synthesize outerGiftModel=_outerGiftModel;
@property(retain, nonatomic) WBMLVideoGiftModel *barrageModel; // @synthesize barrageModel=_barrageModel;
- (void).cxx_destruct;
- (void)requestFreeGiftInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestGiftListWithLiveID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestImageTextCustomGiftListInfoWithLiveID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCustomGiftInfoWithLiveID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAllGiftDataCompletion:(CDUnknownBlockType)arg1;

@end

