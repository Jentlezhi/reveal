//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBVideoPlayerItemPlaybackLogFirstFrameStepInfo : NSObject
{
    _Bool _failed;
    NSString *_name;
    NSDate *_date;
}

@property(nonatomic) _Bool failed; // @synthesize failed=_failed;
@property(nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1 date:(id)arg2 failed:(_Bool)arg3;

@end

