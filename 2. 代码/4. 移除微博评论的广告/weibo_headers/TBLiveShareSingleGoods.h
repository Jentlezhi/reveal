//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSDictionary, NSString;

@interface TBLiveShareSingleGoods : TBLiveJSONModel
{
    NSString *_itemId;
    NSString *_itemName;
    NSString *_itemPic;
    NSString *_itemPrice;
    NSString *_itemURL;
    NSString *_buyCount;
    NSString *_itemH5TaokeURL;
    NSString *_itemIcon;
    NSString *_isDuplicate;
    NSString *_isEdit;
    NSString *_activityIcon;
    NSDictionary *_extendVal;
    unsigned long long _extendVal_Count;
}

+ (id)jsonToModelKeyMapDictionary;
@property(nonatomic) unsigned long long extendVal_Count; // @synthesize extendVal_Count=_extendVal_Count;
@property(retain, nonatomic) NSDictionary *extendVal; // @synthesize extendVal=_extendVal;
@property(copy, nonatomic) NSString *activityIcon; // @synthesize activityIcon=_activityIcon;
@property(copy, nonatomic) NSString *isEdit; // @synthesize isEdit=_isEdit;
@property(copy, nonatomic) NSString *isDuplicate; // @synthesize isDuplicate=_isDuplicate;
@property(copy, nonatomic) NSString *itemIcon; // @synthesize itemIcon=_itemIcon;
@property(copy, nonatomic) NSString *itemH5TaokeURL; // @synthesize itemH5TaokeURL=_itemH5TaokeURL;
@property(copy, nonatomic) NSString *buyCount; // @synthesize buyCount=_buyCount;
@property(copy, nonatomic) NSString *itemURL; // @synthesize itemURL=_itemURL;
@property(copy, nonatomic) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(copy, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

