//                                
// Copyright 2011 ESCOZ Inc  - http://escoz.com
// 
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this 
// file except in compliance with the License. You may obtain a copy of the License at 
// 
// http://www.apache.org/licenses/LICENSE-2.0 
// 
// Unless required by applicable law or agreed to in writing, software distributed under
// the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF 
// ANY KIND, either express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//
#import "QuickDialogTableView.h"
#import "QElement.h"
#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"

@class QRootElement;
@class QElement;

@interface QSection : NSObject {

    NSString *_key;
    CGRect _entryPosition;

@private
    QRootElement *_rootElement;
    UIView *_headerView;
    UIView *_footerView;
}

@property(nonatomic, strong) NSString *key;

@property(nonatomic, strong) NSString *title;
@property(nonatomic, strong) NSString *footer;

@property(nonatomic, strong) NSMutableArray * elements;
@property(nonatomic, strong) QRootElement *rootElement;

@property(nonatomic, readonly) BOOL needsEditing;

@property(nonatomic, strong) UIView *headerView;
@property(nonatomic, strong) UIView *footerView;
@property(nonatomic) CGRect entryPosition;

- (QSection *)initWithTitle:(NSString *)string;

- (void)addElement:(QElement *)element;

- (void)fetchValueIntoObject:(id)obj;

@end