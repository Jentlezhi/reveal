//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TBLiveFollowCache : NSObject
{
    NSMutableArray *_followList;
}

@property(retain, nonatomic) NSMutableArray *followList; // @synthesize followList=_followList;
- (void).cxx_destruct;
- (void)unFollowAccount:(id)arg1;
- (void)followAccount:(id)arg1;
- (_Bool)isFollowWithAccount:(id)arg1;
- (id)init;

@end

