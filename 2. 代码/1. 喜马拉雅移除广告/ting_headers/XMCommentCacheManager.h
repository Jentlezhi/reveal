//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YYCache;

@interface XMCommentCacheManager : NSObject
{
    YYCache *_cache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YYCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)deleteStorageCommentCacheForTrackId:(long long)arg1;
- (void)storageComment:(id)arg1 cacheForTrackId:(long long)arg2;
- (id)commentCacheForTrackId:(long long)arg1;

@end

