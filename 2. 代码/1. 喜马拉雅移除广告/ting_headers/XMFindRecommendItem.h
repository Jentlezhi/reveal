//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSMutableArray, NSString, XMCategoryItem, XMSectionItem;

@interface XMFindRecommendItem : NSObject <XMTableCellModelProtocol>
{
    int _sectionType;
    XMSectionItem *_section;
    NSMutableArray *_list;
    XMCategoryItem *_category;
    NSString *_cityCode;
}

@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) XMCategoryItem *category; // @synthesize category=_category;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) XMSectionItem *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (void)updatePropertiesFromFilterDictionary:(id)arg1;
- (void)updatePropertiesFromPolymericRankingDictionary:(id)arg1;
- (void)updatePropertiesFromUserVIPDictionary:(id)arg1;
- (void)updatePropertiesFromLiveRadioDictionary:(id)arg1;
- (void)updatePropertiesFromModuleTypeDictionary:(id)arg1;
- (void)updatePropertiesFromKeywordsDictionary:(id)arg1;
- (void)updatePropertiesFromTagsDictionary:(id)arg1;
- (void)updatePropertiesFromDiscoverColumnDictionary:(id)arg1;
- (void)updatePropertiesFromSubjectSpecialColumnDictionary:(id)arg1;
- (void)updatePropertiesFromRankSpecialColumnDictionary:(id)arg1;
- (void)updatePropertiesFromCateDictionary:(id)arg1;
- (void)updatePropertiesFromTrackDictionary:(id)arg1;
- (void)updatePropertiesFromAlbumDictionary:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

