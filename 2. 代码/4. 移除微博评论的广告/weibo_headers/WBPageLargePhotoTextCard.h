//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSString;

@interface WBPageLargePhotoTextCard : WBPageCard
{
    NSString *_title_sub;
    NSString *_pic;
    NSString *_desc;
    NSString *_iconUrl;
    NSArray *_buttonModels;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels=_buttonModels;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *title_sub; // @synthesize title_sub=_title_sub;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;

@end

