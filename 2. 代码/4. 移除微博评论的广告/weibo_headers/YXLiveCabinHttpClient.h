//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveEncryptHTTPClient.h"

@interface YXLiveCabinHttpClient : YXLiveEncryptHTTPClient
{
}

+ (id)sharedInstance;
- (void)getLiveCurrentAuditoriumWithScId:(id)arg1 Memberid:(id)arg2 AnchorId:(id)arg3 NeedHighValue:(id)arg4 page:(long long)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (void)getAudienceWithLiveID:(id)arg1 WithMemberid:(id)arg2 Carousel:(_Bool)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)isShowTotalListWithMemberid:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;

@end

