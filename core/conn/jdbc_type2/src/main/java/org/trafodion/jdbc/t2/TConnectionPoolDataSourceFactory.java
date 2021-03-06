// @@@ START COPYRIGHT @@@
//
// (C) Copyright 1999-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
/* -*-java-*-
 * Filename    : TConnectionPoolDataSourceFactory.java
 * Description : 
 *
 */

package org.trafodion.jdbc.t2;

import java.util.Hashtable;
import javax.naming.Context;
import javax.naming.Name;
import javax.naming.Context;
import javax.naming.Reference;
import javax.naming.RefAddr;
import javax.sql.ConnectionPoolDataSource;

public class TConnectionPoolDataSourceFactory implements javax.naming.spi.ObjectFactory 
{
	public TConnectionPoolDataSourceFactory() 
	{}

	public Object getObjectInstance(Object refobj,
				Name name,
				Context nameCtx,
				Hashtable env) throws Exception
	{
		String traceDataSource;
		Reference ref = (Reference)refobj;
		ConnectionPoolDataSource tcpDS;
		TConnectionPoolDataSource cpDS;
		RefAddr		refAddr;
		
		if (ref.getClassName().equals("org.trafodion.jdbc.t2.TConnectionPoolDataSource"))
		{
        	refAddr = ref.get("traceDataSource");
			if (refAddr != null)
			{
				traceDataSource = (String)(refAddr.getContent());
				tcpDS = (ConnectionPoolDataSource)nameCtx.lookup(traceDataSource);
				cpDS = new TConnectionPoolDataSource(traceDataSource, tcpDS);
				return cpDS; 
			}
			else
			{
				cpDS = new TConnectionPoolDataSource();
				return cpDS;
			}
		}
		return null;
	}
}
