//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WBLightSkin, WBTDASINetworkQueue;

@interface WBLightSkinManager : NSObject
{
    _Bool _hasLoadNetList;
    WBLightSkin *_currentLightSkin;
    NSMutableDictionary *_currentLocalLightSkinList;
    NSMutableDictionary *_currentNetLightSkinList;
    NSMutableDictionary *_memoryLightSkinList;
    WBTDASINetworkQueue *_networkQueue;
}

+ (_Bool)netListNeedLoad;
+ (id)skinImageNamed:(id)arg1;
+ (id)currentLightSkin;
+ (id)sharedManager;
@property(retain, nonatomic) WBTDASINetworkQueue *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(nonatomic) _Bool hasLoadNetList; // @synthesize hasLoadNetList=_hasLoadNetList;
@property(retain, nonatomic) NSMutableDictionary *memoryLightSkinList; // @synthesize memoryLightSkinList=_memoryLightSkinList;
@property(retain, nonatomic) NSMutableDictionary *currentNetLightSkinList; // @synthesize currentNetLightSkinList=_currentNetLightSkinList;
@property(retain, nonatomic) NSMutableDictionary *currentLocalLightSkinList; // @synthesize currentLocalLightSkinList=_currentLocalLightSkinList;
@property(retain, nonatomic) WBLightSkin *currentLightSkin; // @synthesize currentLightSkin=_currentLightSkin;
- (void).cxx_destruct;
- (void)onCurrentAccountDidChange;
- (id)skinByID:(id)arg1;
- (void)dealloc;
- (_Bool)applySkin:(id)arg1;
- (void)saveCurrentLightSkin;
- (void)reDownloadAndUseWithSkin:(id)arg1;
- (void)loadCurrentSkin;
- (void)updateMemorySkins;
- (void)saveLocalSkins;
- (void)resetDefaultLightSkin;
- (id)errorWithCode:(long long)arg1 domain:(id)arg2;
- (void)downloadSkin:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)useLightSkin:(id)arg1 byMode:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadNetSkinListWithToastBlosk:(CDUnknownBlockType)arg1;
- (void)loadLocalSkins;
- (id)init;

@end

