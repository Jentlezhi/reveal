//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, XMDubbingModel, XMThemeInfoModel, XMWatermarkInfoModel;

@interface XMVCTimelineData : NSObject <NSCopying>
{
    NSMutableArray *_editDataArray;
    XMThemeInfoModel *_themeInfo;
    NSMutableArray *_captionDataArray;
    NSMutableArray *_compoundCaptionDataArray;
    NSMutableArray *_stickerDataArray;
    XMWatermarkInfoModel *_watermarkInfo;
    NSMutableArray *_transitionDataArray;
    NSMutableArray *_particleDataArray;
    NSMutableArray *_videoFxDataArray;
    XMDubbingModel *_dubbingModel;
    NSMutableArray *_musicDataArray;
    NSMutableArray *_videoDataArray;
    NSMutableArray *_dataOrder;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *dataOrder; // @synthesize dataOrder=_dataOrder;
@property(retain, nonatomic) NSMutableArray *videoDataArray; // @synthesize videoDataArray=_videoDataArray;
@property(retain, nonatomic) NSMutableArray *musicDataArray; // @synthesize musicDataArray=_musicDataArray;
@property(retain, nonatomic) XMDubbingModel *dubbingModel; // @synthesize dubbingModel=_dubbingModel;
@property(retain, nonatomic) NSMutableArray *videoFxDataArray; // @synthesize videoFxDataArray=_videoFxDataArray;
@property(retain, nonatomic) NSMutableArray *particleDataArray; // @synthesize particleDataArray=_particleDataArray;
@property(retain, nonatomic) NSMutableArray *transitionDataArray; // @synthesize transitionDataArray=_transitionDataArray;
@property(retain, nonatomic) XMWatermarkInfoModel *watermarkInfo; // @synthesize watermarkInfo=_watermarkInfo;
@property(retain, nonatomic) NSMutableArray *stickerDataArray; // @synthesize stickerDataArray=_stickerDataArray;
@property(retain, nonatomic) NSMutableArray *compoundCaptionDataArray; // @synthesize compoundCaptionDataArray=_compoundCaptionDataArray;
@property(retain, nonatomic) NSMutableArray *captionDataArray; // @synthesize captionDataArray=_captionDataArray;
@property(retain, nonatomic) XMThemeInfoModel *themeInfo; // @synthesize themeInfo=_themeInfo;
@property(retain, nonatomic) NSMutableArray *editDataArray; // @synthesize editDataArray=_editDataArray;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

