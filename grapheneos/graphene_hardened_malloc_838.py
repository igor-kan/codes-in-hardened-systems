"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 838."""

def spec_graphene_hardened_malloc_838() -> dict:
    return {"system": "GrapheneOS", "spec_id": 838, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_838():
    s = spec_graphene_hardened_malloc_838()
    assert s["spec_id"] == 838
