//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSONG_SongItem;

@interface KSONG_SongListOfWaitChange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsAdd; // @dynamic hasIsAdd;
@property(nonatomic) _Bool hasSongItem; // @dynamic hasSongItem;
@property(nonatomic) _Bool hasTimeStamp; // @dynamic hasTimeStamp;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(nonatomic) _Bool isAdd; // @dynamic isAdd;
@property(retain, nonatomic) KSONG_SongItem *songItem; // @dynamic songItem;
@property(nonatomic) unsigned long long timeStamp; // @dynamic timeStamp;
@property(nonatomic) int versionInfo; // @dynamic versionInfo;

@end

