//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMCategoryRecChildAgeModel : XMModel
{
    unsigned long long _type;
    NSString *_displayName;
    NSString *_name;
    NSString *_title;
    unsigned long long _metadataId;
    unsigned long long _Id;
    NSString *_url;
}

+ (id)xmm_modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long Id; // @synthesize Id=_Id;
@property(nonatomic) unsigned long long metadataId; // @synthesize metadataId=_metadataId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

