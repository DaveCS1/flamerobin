/*
  Copyright (c) 2004-2016 The FlameRobin Development Team

  Permission is hereby granted, free of charge, to any person obtaining
  a copy of this software and associated documentation files (the
  "Software"), to deal in the Software without restriction, including
  without limitation the rights to use, copy, modify, merge, publish,
  distribute, sublicense, and/or sell copies of the Software, and to
  permit persons to whom the Software is furnished to do so, subject to
  the following conditions:

  The above copyright notice and this permission notice shall be included
  in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
  TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef FR_METADATAITEMCREATESTATEMENTVISITOR_H
#define FR_METADATAITEMCREATESTATEMENTVISITOR_H

#include "metadata/MetadataItemVisitor.h"

class MetadataItemCreateStatementVisitor : public MetadataItemVisitor
{
private:
    wxString statementM;
public:
    static wxString getCreateDomainStatement();
    static wxString getCreateExceptionStatement();
    static wxString getCreateFunctionSQLStatement();
    static wxString getCreateGeneratorStatement();
    static wxString getCreatePackageStatement();
    static wxString getCreateProcedureStatement();
    static wxString getCreateRoleStatement();
    static wxString getCreateTableStatement();
    static wxString getCreateGTTTableStatement();
    static wxString getCreateTriggerStatement();
    static wxString getCreateDBTriggerStatement();
    static wxString getCreateDDLTriggerStatement();
    static wxString getCreateUDFStatement();
    static wxString getCreateViewStatement();

    virtual void visitDomains(Domains& domains);
    virtual void visitExceptions(Exceptions& exceptions);
    virtual void visitFunctionSQLs(FunctionSQLs& functions);
    virtual void visitGenerators(Generators& generators);
    virtual void visitPackages(Packages& packages);
    virtual void visitProcedures(Procedures& procedures);
    virtual void visitRoles(Roles& roles);
    virtual void visitTables(Tables& tables);
    virtual void visitTriggers(Triggers& triggers);
    virtual void visitUDFs(UDFs& functions);
    virtual void visitViews(Views& views);

    wxString getStatement() const;
};

#endif // FR_METADATAITEMCREATESTATEMENTVISITOR_H
