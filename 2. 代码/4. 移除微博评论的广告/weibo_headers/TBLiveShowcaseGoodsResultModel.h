//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSString;

@interface TBLiveShowcaseGoodsResultModel : TBLiveJSONModel
{
    NSString *_itemId;
    NSString *_itemName;
    NSString *_itemPic;
    NSString *_itemPrice;
    NSString *_itemUrl;
    NSString *_itemH5TaokeUrl;
    NSString *_bulk;
    NSString *_duplicate;
    NSString *_favored;
    NSString *_goodsIndex;
    NSString *_groupNum;
    NSString *_hasDiscount;
    NSString *_isCpc;
}

@property(copy, nonatomic) NSString *isCpc; // @synthesize isCpc=_isCpc;
@property(copy, nonatomic) NSString *hasDiscount; // @synthesize hasDiscount=_hasDiscount;
@property(copy, nonatomic) NSString *groupNum; // @synthesize groupNum=_groupNum;
@property(copy, nonatomic) NSString *goodsIndex; // @synthesize goodsIndex=_goodsIndex;
@property(copy, nonatomic) NSString *favored; // @synthesize favored=_favored;
@property(copy, nonatomic) NSString *duplicate; // @synthesize duplicate=_duplicate;
@property(copy, nonatomic) NSString *bulk; // @synthesize bulk=_bulk;
@property(copy, nonatomic) NSString *itemH5TaokeUrl; // @synthesize itemH5TaokeUrl=_itemH5TaokeUrl;
@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(copy, nonatomic) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(copy, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

