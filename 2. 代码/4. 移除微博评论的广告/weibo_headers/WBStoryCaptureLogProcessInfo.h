//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface WBStoryCaptureLogProcessInfo : NSObject
{
    _Bool _droped;
    double _processDuration;
    NSError *_error;
}

@property(nonatomic) _Bool droped; // @synthesize droped=_droped;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double processDuration; // @synthesize processDuration=_processDuration;
- (void).cxx_destruct;

@end

