//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TabbarReplaceItem : NSObject
{
    NSString *_zh_Hans;
    NSString *_zh_Hant;
    NSString *_en;
    NSString *_image_light;
    NSString *_image_light_highlight;
    NSString *_image_night;
    NSString *_image_night_highlight;
}

@property(retain, nonatomic) NSString *image_night_highlight; // @synthesize image_night_highlight=_image_night_highlight;
@property(retain, nonatomic) NSString *image_night; // @synthesize image_night=_image_night;
@property(retain, nonatomic) NSString *image_light_highlight; // @synthesize image_light_highlight=_image_light_highlight;
@property(retain, nonatomic) NSString *image_light; // @synthesize image_light=_image_light;
@property(retain, nonatomic) NSString *en; // @synthesize en=_en;
@property(retain, nonatomic) NSString *zh_Hant; // @synthesize zh_Hant=_zh_Hant;
@property(retain, nonatomic) NSString *zh_Hans; // @synthesize zh_Hans=_zh_Hans;
- (void).cxx_destruct;
- (void)dserializeFromLocal:(id)arg1;
- (id)serializeToLocal;
- (_Bool)deserializeFromServerDic:(id)arg1;
- (void)dealloc;

@end

