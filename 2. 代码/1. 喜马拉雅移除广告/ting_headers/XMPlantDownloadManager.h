//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMPlantPlayModel;

@interface XMPlantDownloadManager : NSObject
{
    XMPlantPlayModel *_playModel;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) XMPlantPlayModel *playModel; // @synthesize playModel=_playModel;
- (void).cxx_destruct;
- (void)downloadWithServerUrl:(id)arg1 downloadPath:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleScanResult:(id)arg1;
- (void)detectImageByAVFoundationAfterZXingReadFail:(id)arg1 andIsPhoto:(_Bool)arg2;
- (void)xmZxingScanImage:(id)arg1;
- (void)onScanNewQRCodeNotify:(id)arg1;
- (void)requestSoundInfo:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

