//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage;
@protocol WBSharingObject;

@interface WBShareContent : NSObject
{
    _Bool _contentDisable;
    _Bool _isDarkStyle;
    long long _contentType;
    NSString *_title;
    NSString *_shareDescription;
    NSString *_url;
    NSString *_userName;
    NSString *_miniProgramPath;
    UIImage *_miniProgramHDImage;
    UIImage *_thumbImage;
    UIImage *_snapshotImage;
    NSObject *_customData;
    NSString *_commandCodeString;
    NSString *_ext;
    NSDictionary *_analysisParameters;
    id <WBSharingObject> _sharingObject;
    NSString *_appExtendedScheme;
}

@property(nonatomic) _Bool isDarkStyle; // @synthesize isDarkStyle=_isDarkStyle;
@property(copy, nonatomic) NSString *appExtendedScheme; // @synthesize appExtendedScheme=_appExtendedScheme;
@property(nonatomic) _Bool contentDisable; // @synthesize contentDisable=_contentDisable;
@property(retain, nonatomic) id <WBSharingObject> sharingObject; // @synthesize sharingObject=_sharingObject;
@property(retain, nonatomic) NSDictionary *analysisParameters; // @synthesize analysisParameters=_analysisParameters;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *commandCodeString; // @synthesize commandCodeString=_commandCodeString;
@property(retain, nonatomic) NSObject *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) UIImage *miniProgramHDImage; // @synthesize miniProgramHDImage=_miniProgramHDImage;
@property(copy, nonatomic) NSString *miniProgramPath; // @synthesize miniProgramPath=_miniProgramPath;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)miniProgramHDImageData;
- (void)web_setDefaultThumbImageForShareType:(long long)arg1;
- (id)web_externalShareDefaultImageForShareType:(long long)arg1;

@end

