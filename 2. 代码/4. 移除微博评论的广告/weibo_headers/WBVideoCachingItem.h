//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, WBStatus;
@protocol WBVideoPlaybackResource;

@interface WBVideoCachingItem : WBModelObject
{
    _Bool _ignoreNetWorkChange;
    _Bool _newCacheFolder;
    long long _pendingReason;
    long long _pauseReason;
    NSString *_errorMsg;
    WBStatus *_status;
    id <WBVideoPlaybackResource> _playbackResource;
    long long _resourceType;
    NSString *_resourceIdentifier;
    long long _resourceQuality;
    long long _cachedSize;
    long long _fileSize;
}

@property(nonatomic) _Bool newCacheFolder; // @synthesize newCacheFolder=_newCacheFolder;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long cachedSize; // @synthesize cachedSize=_cachedSize;
@property(nonatomic) long long resourceQuality; // @synthesize resourceQuality=_resourceQuality;
@property(retain, nonatomic) NSString *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
@property(nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) id <WBVideoPlaybackResource> playbackResource; // @synthesize playbackResource=_playbackResource;
@property(nonatomic) _Bool ignoreNetWorkChange; // @synthesize ignoreNetWorkChange=_ignoreNetWorkChange;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long pauseReason; // @synthesize pauseReason=_pauseReason;
@property(nonatomic) long long pendingReason; // @synthesize pendingReason=_pendingReason;
- (void).cxx_destruct;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (double)cachingProgress;
- (id)coverImageUrl;
- (id)itemTitleString;
- (id)cachingSizeString;
- (id)cachingStateString;
@property(readonly, nonatomic) long long state;
- (double)videoDuration;
- (id)videoItem;
- (id)primaryKey;
- (id)identifier;

@end

