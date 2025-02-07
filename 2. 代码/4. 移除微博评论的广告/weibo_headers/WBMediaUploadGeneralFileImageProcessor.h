//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMediaUploadGeneralFileContentProcessing-Protocol.h"

@class NSProgress, NSString, WBMediaUploadContentSource;

@interface WBMediaUploadGeneralFileImageProcessor : NSObject <WBMediaUploadGeneralFileContentProcessing>
{
    _Bool _cancelled;
    NSProgress *_progress;
    WBMediaUploadContentSource *_contentSource;
    NSString *_outputDirectory;
}

@property(retain, nonatomic) NSString *outputDirectory; // @synthesize outputDirectory=_outputDirectory;
@property(retain, nonatomic) WBMediaUploadContentSource *contentSource; // @synthesize contentSource=_contentSource;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)cancel;
- (void)createFinalContentSourceWithPath:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startProcessingWithConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContentSource:(id)arg1 cacheDirectory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

