//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, NSLock;

@interface XMMVideoExporter : NSObject
{
    _Bool _runing;
    AVAssetExportSession *_exportSession;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
- (void).cxx_destruct;
- (void)cancelExport;
- (_Bool)startExportWithVideoAsset:(id)arg1 command:(id)arg2 presetNames:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)exportVideoAsset:(id)arg1 command:(id)arg2 presetNames:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)exportVideoAsset:(id)arg1 command:(id)arg2 presetName:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) _Bool isRunning;
@property(nonatomic) _Bool runing;
- (id)init;

@end

