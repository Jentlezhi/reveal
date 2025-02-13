//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSArray, NSString;
@protocol XMTableCellModelProtocol;

@interface XMSearchSpecialModel : NSObject <XMTableCellModelProtocol>
{
    _Bool _hasMore;
    _Bool _longDivideLine;
    _Bool _extendMore;
    long long _modelType;
    NSString *_title;
    id <XMTableCellModelProtocol> _moduleItem;
    NSArray *_modelList;
    NSString *_itingURLString;
    id _otherTargetItem;
    long long _moduleCount;
    NSString *_titleLogo;
    long long _moduleListId;
    NSString *_itemType;
}

+ (id)moreAttributedText;
+ (id)modelWithJson:(id)arg1;
+ (id)specialModelsListWithDocsJsonList:(id)arg1;
+ (id)searchSpecialModelsWithJsonlist:(id)arg1;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(nonatomic) _Bool extendMore; // @synthesize extendMore=_extendMore;
@property(nonatomic) _Bool longDivideLine; // @synthesize longDivideLine=_longDivideLine;
@property(nonatomic) long long moduleListId; // @synthesize moduleListId=_moduleListId;
@property(copy, nonatomic) NSString *titleLogo; // @synthesize titleLogo=_titleLogo;
@property(nonatomic) long long moduleCount; // @synthesize moduleCount=_moduleCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) id otherTargetItem; // @synthesize otherTargetItem=_otherTargetItem;
@property(retain, nonatomic) NSString *itingURLString; // @synthesize itingURLString=_itingURLString;
@property(retain, nonatomic) NSArray *modelList; // @synthesize modelList=_modelList;
@property(retain, nonatomic) id <XMTableCellModelProtocol> moduleItem; // @synthesize moduleItem=_moduleItem;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long modelType; // @synthesize modelType=_modelType;
- (void).cxx_destruct;
- (_Bool)parseTopType:(id)arg1;
- (_Bool)parseActivityType:(id)arg1;
- (_Bool)parseDocsType:(id)arg1;
- (_Bool)parseRankAlbumsType:(id)arg1;
- (_Bool)parseGuessAlbumsType:(id)arg1;
- (_Bool)parseOutsideHotType:(id)arg1;
- (_Bool)parseGiftForNewUserType:(id)arg1;
- (_Bool)parseHotSpotType:(id)arg1;
- (_Bool)parseDeliveryType:(id)arg1;
- (_Bool)parseJsonData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

