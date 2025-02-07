//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUPersistence;

@interface BUCrashTrackerStorage : NSObject
{
    BUPersistence *_persistence;
}

+ (id)shareTrackerStorage;
@property(retain, nonatomic) BUPersistence *persistence; // @synthesize persistence=_persistence;
- (void).cxx_destruct;
- (id)faildTimesCachedKey:(id)arg1 dataDict:(id)arg2;
- (id)createDateCachedKey:(id)arg1 dataDict:(id)arg2;
- (void)updateV1TrackOfIDs:(id)arg1 sending:(_Bool)arg2;
- (void)deleteV1TrackCreatedBefore:(double)arg1;
- (id)allV1Tracks;
- (void)removeV1TracksByID:(id)arg1;
- (void)insertV1Track:(id)arg1 trackID:(id)arg2;
- (id)insertV1Track:(id)arg1;
- (id)init;

@end

