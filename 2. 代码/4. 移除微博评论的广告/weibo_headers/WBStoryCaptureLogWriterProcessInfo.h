//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryCaptureLogProcessInfo.h"

@class NSString;

@interface WBStoryCaptureLogWriterProcessInfo : WBStoryCaptureLogProcessInfo
{
    _Bool _recording;
    NSString *_recordingUUID;
}

@property(copy, nonatomic) NSString *recordingUUID; // @synthesize recordingUUID=_recordingUUID;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
- (void).cxx_destruct;

@end

