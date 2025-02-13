//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSDictionary, NSMutableDictionary, NSString, WBBorderMarketModel, WBBorderModel, WBFilterModel, WBFilterStickerResponseModel, WBStickerCategoryBarModel;

@interface WBFilterStickerMarket : NSObject
{
    NSArray *_builtInFilterIds;
    NSDictionary *_builtInFilterZipMD5s;
    _Bool _shouldHideBarStickes;
    NSArray *_customStickersArray;
    NSArray *_getStickers;
    WBFilterModel *_getFilter;
    WBBorderModel *_getBorder;
    WBStickerCategoryBarModel *_currentCategory;
    NSMutableDictionary *_cachedData;
    NSString *_stickerVersion;
    NSString *_filterVersion;
    WBFilterStickerResponseModel *_marketResponseModel;
    WBStickerCategoryBarModel *_currentSportCategory;
    WBBorderMarketModel *_borderMarketModel;
    NSString *_processingStickerID;
    NSMutableDictionary *_localStickers;
    NSMutableDictionary *_tmpStickerModels;
    NSCache *_followedInfoCache;
}

+ (void)cancelProcessing;
+ (void)getVersaEffectImagewithFilterId:(id)arg1 withPid:(id)arg2 finish:(CDUnknownBlockType)arg3;
+ (id)makeLocalWeatherInfo;
+ (void)getWeatherDataWithLocation:(id)arg1 finish:(CDUnknownBlockType)arg2;
+ (void)processWeatherStickers:(id)arg1 data:(id)arg2 isSuccessed:(_Bool)arg3 finish:(CDUnknownBlockType)arg4;
+ (void)processStaticDateStickers:(id)arg1 date:(id)arg2 finish:(CDUnknownBlockType)arg3;
+ (_Bool)verifyStickerData:(id)arg1;
+ (void)loadGIFStickers:(id)arg1 finish:(CDUnknownBlockType)arg2;
+ (id)sharedMarket;
+ (id)stickerLibraryCacheDirectory;
+ (id)filterAndStickerCacheRoot;
@property(retain, nonatomic) NSCache *followedInfoCache; // @synthesize followedInfoCache=_followedInfoCache;
@property(retain, nonatomic) NSMutableDictionary *tmpStickerModels; // @synthesize tmpStickerModels=_tmpStickerModels;
@property(retain, nonatomic) NSMutableDictionary *localStickers; // @synthesize localStickers=_localStickers;
@property(retain) NSString *processingStickerID; // @synthesize processingStickerID=_processingStickerID;
@property(retain, nonatomic) WBBorderMarketModel *borderMarketModel; // @synthesize borderMarketModel=_borderMarketModel;
@property(retain, nonatomic) WBStickerCategoryBarModel *currentSportCategory; // @synthesize currentSportCategory=_currentSportCategory;
@property(retain, nonatomic) WBFilterStickerResponseModel *marketResponseModel; // @synthesize marketResponseModel=_marketResponseModel;
@property(retain, nonatomic) NSString *filterVersion; // @synthesize filterVersion=_filterVersion;
@property(retain, nonatomic) NSString *stickerVersion; // @synthesize stickerVersion=_stickerVersion;
@property(retain, nonatomic) NSMutableDictionary *cachedData; // @synthesize cachedData=_cachedData;
@property(retain, nonatomic) WBStickerCategoryBarModel *currentCategory; // @synthesize currentCategory=_currentCategory;
@property(retain, nonatomic) WBBorderModel *getBorder; // @synthesize getBorder=_getBorder;
@property(retain, nonatomic) WBFilterModel *getFilter; // @synthesize getFilter=_getFilter;
@property(retain, nonatomic) NSArray *getStickers; // @synthesize getStickers=_getStickers;
@property(nonatomic) _Bool shouldHideBarStickes; // @synthesize shouldHideBarStickes=_shouldHideBarStickes;
@property(copy, nonatomic) NSArray *customStickersArray; // @synthesize customStickersArray=_customStickersArray;
- (void).cxx_destruct;
- (void)clearAllLocalBoardSources;
- (void)removeObsoletedStickers:(id)arg1;
- (void)cleanDownloadedStickerIfNeeded:(id)arg1;
- (void)cleanLocalDownloadStickers;
- (void)cleanDynamicStickers;
- (void)cleanGetFilterStickers;
- (id)getBuildInFilterJsonData:(id)arg1 bolnet:(_Bool)arg2;
- (_Bool)isFilterId:(id)arg1 inMarketResponseModel:(id)arg2;
- (_Bool)isFilterInBuildInBundle:(id)arg1;
- (id)builtInFiltersJSONString;
- (id)builtInFilters;
- (id)builtInFilterZipMD5WithFilterID:(id)arg1;
- (id)buildInFilterIdArray;
- (_Bool)isFilterZipMD5Updated:(id)arg1;
- (_Bool)isFilterVersionUpdated:(id)arg1;
- (void)removeObsoletedFilters:(id)arg1;
- (id)filterModelWithID:(id)arg1;
- (id)filtersArray;
- (_Bool)isStickerModelZipMD5Updated:(id)arg1;
- (_Bool)isStickerModelVersionUpdated:(id)arg1;
- (_Bool)isStickerZipMD5Updated:(id)arg1;
- (_Bool)isStickerVersionUpdated:(id)arg1;
- (_Bool)isFilterZipDownloaded:(id)arg1;
- (int)checkFilterState:(id)arg1;
- (_Bool)generateWeatherDynamicStickerImage:(id)arg1;
- (_Bool)generateStaticDateStickerImage:(id)arg1 date:(id)arg2;
- (void)formateWeatherDynamicInfo:(id)arg1 data:(id)arg2;
- (void)updateFollowedInfo:(id)arg1;
- (id)followingInfoOfSticker:(id)arg1;
- (_Bool)setStickerVersion:(id)arg1 andFilterVersion:(id)arg2;
- (id)getDifferentIdArray:(id)arg1 compareWith:(id)arg2;
- (void)autoUpdateFilterWithOldModels:(id)arg1 andNewModels:(id)arg2;
- (void)autoUpdateStickerWithOldModels:(id)arg1 andNewModels:(id)arg2;
- (void)downloadGifSticker:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteLocalBoardSourceWithID:(id)arg1;
- (void)downloadBorderWithBorderModel:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getBorderListOftab:(id)arg1 tabID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateBorderCache;
- (id)getBorderCache;
- (id)borderModelWithBorderID:(id)arg1 inMarket:(id)arg2;
- (id)borderModelWithBorderID:(id)arg1;
- (void)updateLocalStickers:(id)arg1;
- (void)writeLocalStickersTofile;
- (void)addStickerToLocalDownloadedStickers:(id)arg1;
- (void)downloadSticker:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchStickerWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchInfoOfSticker:(id)arg1 andFilter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadFilter:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadFilterWithID:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadSticker:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadStickerWithID:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getJsonRequestParameterString:(id)arg1 stickerVersion:(id)arg2;
- (id)getNeedCheckOldStickerModelsFromArray:(id)arg1;
- (id)getStickerLiteModelArrayFromVersionCache:(id)arg1;
- (id)getFilterLiteModelArrayFromVersionCache:(id)arg1;
- (id)getLocalFilterVersion:(id)arg1;
- (id)getLocalStickerVersion:(id)arg1;
- (void)updateLocationVersionForFilter:(id)arg1;
- (void)updateLocationVersionForSticker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLocalStickerVersion:(id)arg1 filterVersion:(id)arg2;
- (void)setLocalVersionData:(id)arg1;
- (id)getLocalVersionData;
- (id)searchLiteModel:(id)arg1 withModelId:(id)arg2;
- (id)getFilterLiteModelArrayFromMarket:(id)arg1;
- (id)getStickerLiteModelArrayFromMarket:(id)arg1;
- (id)mergeOldMarketDataWithNewMarketData:(id)arg1;
- (void)parseMarketDataAndWriteToCache:(id)arg1;
- (void)loadFilterMarketWithCacheData:(CDUnknownBlockType)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)makeFilterVersionUpdate;
- (void)makeStickerVersionUpdate;
- (void)loadJsonData:(id)arg1;
- (id)stickerModelWithID:(id)arg1;
- (id)getValidStickersFromStickerArray:(id)arg1;
- (id)stickerLists;
- (id)stickerCategoryList;
- (id)stickersArray;
- (_Bool)isStickerCategoryMode;
- (void)stickerFilterVersionUpdate;
- (id)init;
- (id)stickersAferDealGetStickers:(id)arg1;
- (void)downloadGifSticker:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadBorderWithBorderModel:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadSticker:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadFilter:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadFilterWithID:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadSticker:(id)arg1 withDownloadProgress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)stickerLists;
- (void)cleanLocalDownloadStickers;
- (id)getUnZipDynamicResourcePath:(id)arg1 ownerId:(id)arg2;
- (id)getUnzipJsonPath:(id)arg1 ownerId:(id)arg2;
- (id)getUnzipImagePath:(id)arg1 ownerId:(id)arg2;
- (id)getUnZipTempPath:(id)arg1;
- (id)getStickerDynamicResourcePath:(id)arg1;
- (id)getStickerZipPath:(id)arg1;
- (id)getStickerStaticDateFontSourcePath:(id)arg1;
- (id)getStickerGIFSourcePath:(id)arg1;
- (id)getStickerJsonPath:(id)arg1;
- (id)getStickerImagePath:(id)arg1;
- (id)getStickerSignPath:(id)arg1;
- (id)getStickerIconPath:(id)arg1;
- (id)getStickerPath:(id)arg1;
- (id)getFilterZipPath:(id)arg1;
- (id)getFilterJsonPath:(id)arg1;
- (id)getFilterIconPath:(id)arg1;
- (id)getFilterPath:(id)arg1;
- (id)getBorderImagePath:(id)arg1;
- (id)getBorderJsonPath:(id)arg1;
- (id)getBorderZipPath:(id)arg1;
- (id)getBorderPath:(id)arg1;
- (id)bordersDataCachePath;
- (id)specialStickersCachePath;
- (id)localStickersPath;
- (id)cachedBorderPath;
- (id)cachedStickerPath;
- (id)cachedFilterPath;
- (id)cachedVersionDataFilePath;
- (id)cachedMarketDataFilePath;

@end

