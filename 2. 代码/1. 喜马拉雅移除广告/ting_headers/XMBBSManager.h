//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMBBSManager : NSObject
{
}

+ (void)setHasCloseRenewInfoForCommunityToday:(unsigned long long)arg1;
+ (_Bool)hasCloseRenewInfoForCommunityToday:(unsigned long long)arg1;
+ (void)recordAlertPopId:(id)arg1;
+ (_Bool)isAlertPopIdRecored:(id)arg1;
+ (void)setHasShowCategoryRedPoint;
+ (_Bool)hasShowCategoryRedPoint;
+ (void)setHasShownJoinCommunityNoviceTipView:(unsigned long long)arg1;
+ (_Bool)hasShownJoinCommunityNoviceTipView:(unsigned long long)arg1;
+ (void)showBanDurationActionSheetWithCtrl:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)bbsDirectory;
+ (id)defaultBackgroundImage;
+ (id)defaultUserHeadImage;
+ (id)imageNamed:(id)arg1;
+ (id)resourceBundle;
+ (id)frameworkBundle;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool isSupportShare;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

