//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStickerModel.h"

@class NSString, WBDynamicStickerDesc;

@interface WBDynamicStickerModel : WBStickerModel
{
    _Bool _is_checkin;
    WBDynamicStickerDesc *_dynamic_sticker;
    NSString *_subTypeStr;
    NSString *_dynamic_sticker_path;
    long long _today_step;
}

@property(nonatomic) long long today_step; // @synthesize today_step=_today_step;
@property(nonatomic) _Bool is_checkin; // @synthesize is_checkin=_is_checkin;
@property(retain) NSString *dynamic_sticker_path; // @synthesize dynamic_sticker_path=_dynamic_sticker_path;
@property(retain, nonatomic) NSString *subTypeStr; // @synthesize subTypeStr=_subTypeStr;
@property(retain, nonatomic) WBDynamicStickerDesc *dynamic_sticker; // @synthesize dynamic_sticker=_dynamic_sticker;
- (void).cxx_destruct;
- (id)representWithDictionary;
- (void)loadMarketData:(id)arg1;
- (_Bool)isZipDownload;
- (_Bool)isDownload;
- (id)init;

@end

