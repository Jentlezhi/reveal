//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class ALAsset, NSDictionary, NSNumber, NSString, PHAsset;

@interface WBMediaEditorCache : NSObject <NSCopying>
{
    struct {
        unsigned int contentSizeNeedUpdate:1;
    } _media_flags;
    long long _contentSize;
    NSString *_createType;
    _Bool _isNeedSaveToAlbum;
    _Bool _isSelected;
    _Bool _isLivePhotoOn;
    _Bool _isLivePhotoImageEdited;
    _Bool _notExistLivePhotoFid;
    _Bool _isShowingLivePhotoToggle;
    _Bool _isLivePhotoEditedWarningDisplayed;
    _Bool _isGifImage;
    _Bool _isGifAllowed;
    _Bool _isGifImageEdited;
    _Bool _isGifEditedWarningDisplayed;
    _Bool _isPanoramaAllowed;
    unsigned long long _picSource;
    NSString *_filePath;
    NSString *_assetID;
    ALAsset *_originalAsset;
    NSString *_phLocalIdentifier;
    PHAsset *_originalPHAsset;
    NSString *_finalPath;
    NSString *_compressSettingsPath;
    NSString *_operationTopic;
    NSDictionary *_originalDict;
    double _panoramaHeadingDegrees;
    double _panoramaPitchDegrees;
    NSString *_originMD5;
    NSDictionary *_compressLog;
    unsigned long long _editStatus;
    NSString *_cacheVersion;
    NSNumber *_assetModificationTime;
    long long _finalFileSize;
}

+ (id)compressSettingsPathForFinalPath:(id)arg1;
@property(nonatomic) long long finalFileSize; // @synthesize finalFileSize=_finalFileSize;
@property(copy, nonatomic) NSNumber *assetModificationTime; // @synthesize assetModificationTime=_assetModificationTime;
@property(copy, nonatomic) NSString *cacheVersion; // @synthesize cacheVersion=_cacheVersion;
@property(nonatomic) unsigned long long editStatus; // @synthesize editStatus=_editStatus;
@property(copy, nonatomic) NSDictionary *compressLog; // @synthesize compressLog=_compressLog;
@property(copy, nonatomic) NSString *originMD5; // @synthesize originMD5=_originMD5;
@property(nonatomic) double panoramaPitchDegrees; // @synthesize panoramaPitchDegrees=_panoramaPitchDegrees;
@property(nonatomic) double panoramaHeadingDegrees; // @synthesize panoramaHeadingDegrees=_panoramaHeadingDegrees;
@property(nonatomic) _Bool isPanoramaAllowed; // @synthesize isPanoramaAllowed=_isPanoramaAllowed;
@property(nonatomic) _Bool isGifEditedWarningDisplayed; // @synthesize isGifEditedWarningDisplayed=_isGifEditedWarningDisplayed;
@property(nonatomic) _Bool isGifImageEdited; // @synthesize isGifImageEdited=_isGifImageEdited;
@property(nonatomic) _Bool isGifAllowed; // @synthesize isGifAllowed=_isGifAllowed;
@property(nonatomic) _Bool isGifImage; // @synthesize isGifImage=_isGifImage;
@property(nonatomic) _Bool isLivePhotoEditedWarningDisplayed; // @synthesize isLivePhotoEditedWarningDisplayed=_isLivePhotoEditedWarningDisplayed;
@property(nonatomic) _Bool isShowingLivePhotoToggle; // @synthesize isShowingLivePhotoToggle=_isShowingLivePhotoToggle;
@property(nonatomic) _Bool notExistLivePhotoFid; // @synthesize notExistLivePhotoFid=_notExistLivePhotoFid;
@property(nonatomic) _Bool isLivePhotoImageEdited; // @synthesize isLivePhotoImageEdited=_isLivePhotoImageEdited;
@property(nonatomic) _Bool isLivePhotoOn; // @synthesize isLivePhotoOn=_isLivePhotoOn;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSDictionary *originalDict; // @synthesize originalDict=_originalDict;
@property(copy, nonatomic) NSString *operationTopic; // @synthesize operationTopic=_operationTopic;
@property(readonly, nonatomic) NSString *compressSettingsPath; // @synthesize compressSettingsPath=_compressSettingsPath;
@property(retain, nonatomic) NSString *finalPath; // @synthesize finalPath=_finalPath;
@property(retain) PHAsset *originalPHAsset; // @synthesize originalPHAsset=_originalPHAsset;
@property(retain, nonatomic) NSString *phLocalIdentifier; // @synthesize phLocalIdentifier=_phLocalIdentifier;
@property(retain) ALAsset *originalAsset; // @synthesize originalAsset=_originalAsset;
@property(retain, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) _Bool isNeedSaveToAlbum; // @synthesize isNeedSaveToAlbum=_isNeedSaveToAlbum;
@property(nonatomic) unsigned long long picSource; // @synthesize picSource=_picSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *videoPath;
@property(readonly, nonatomic) NSDictionary *uploadSensitiveData;
@property(readonly, nonatomic) _Bool isPanoramaOn;
@property(readonly, nonatomic) _Bool isPanoramaImage;
- (_Bool)isGifOn;
- (_Bool)isLivePhoto;
- (_Bool)isEqual:(id)arg1;
- (void)clean;
- (_Bool)isSameCache:(id)arg1;
- (_Bool)isSameResource:(id)arg1;
- (_Bool)isFunnyPic;
@property(retain, nonatomic) NSString *createType;
- (id)videoFirstClipPath;
@property(readonly, nonatomic) __weak NSString *mediaFinalURL;
- (id)mediaThumbnailImage;
- (void)recoverPHAssetWithBlock:(CDUnknownBlockType)arg1;
- (void)recoverAssetWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) long long contentSize;
- (id)tagInfos;
@property(readonly, nonatomic) long long mediaType;
- (void)setupObjectForCopy:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

