//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMDubShowMSCartoonViewModel : XMModel
{
    long long _materialId;
    long long _subMaterialId;
    NSString *_title;
    long long _width;
    long long _height;
    NSArray *_picModels;
    unsigned long long _curPageNo;
}

+ (id)xmm_modelContainerPropertyGenericClass;
@property(nonatomic) unsigned long long curPageNo; // @synthesize curPageNo=_curPageNo;
@property(retain, nonatomic) NSArray *picModels; // @synthesize picModels=_picModels;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long subMaterialId; // @synthesize subMaterialId=_subMaterialId;
@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
- (void).cxx_destruct;
- (long long)nextUnRecordPic;
- (id)currentPageNoModel;

@end

