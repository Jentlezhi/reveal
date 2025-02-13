//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBStoryCameraModeModel : NSObject
{
    NSString *_title;
    NSString *_normalIcon;
    unsigned long long _mode;
    NSString *_recordingIcon;
    unsigned long long _minFrameCount;
    double _maxRecordDuration;
}

+ (id)cameraModeString:(unsigned long long)arg1;
+ (id)storyCameraModes:(id)arg1;
+ (id)modelWithModeType:(unsigned long long)arg1;
@property(nonatomic) double maxRecordDuration; // @synthesize maxRecordDuration=_maxRecordDuration;
@property(nonatomic) unsigned long long minFrameCount; // @synthesize minFrameCount=_minFrameCount;
@property(retain, nonatomic) NSString *recordingIcon; // @synthesize recordingIcon=_recordingIcon;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *normalIcon; // @synthesize normalIcon=_normalIcon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) double wbst_width;
- (id)wbst_contentWidth;
- (void)setWbst_contentWidth:(id)arg1;

@end

